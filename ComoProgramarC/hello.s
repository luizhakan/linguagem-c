.global main # Avisa ao processador e ao sistema operacional que a função main existe e pode ser vista.

.section .rodata # É uma seção de dados. Aqui eu estou guardando na RAM. Detalhe: rodata quer dizer que o dado é Read-Only
message: # Aqui é um rótulo para eu dizer onde que o "H" do "Hello world etc etc" vai iniciar na memória
    .ascii "Hello world em Assembly no Fedora!\n" # Aqui eu estou falando para o meu montador converter isso para código binário (ASCII)
    message_end:
    .equ message_len, message_end - message # Aqui é um truque pra evitar contar letra por letra na mão. Subtraindo o endereço final do texto. Já que CADA letra representa um endereço na memória.

.section .text # Aqui estou indicando a missão de código. Dando instruções diretas para o processador executar.
main:
    # 1. Syscall 'write' (imprimir na tela)
    movq $1, %rax           # Código da syscall write = 1
    movq $1, %rdi           # Destino: stdout (tela)  = 1
    movq $message, %rsi     # Endereço da string
    movq $message_len, %rdx # Tamanho da string
    syscall                 # Chama o Kernel do Linux

    # 2. Syscall 'exit' (encerrar o programa)
    movq $60, %rax          # Código da syscall exit = 60
    movq $0, %rdi           # Código de retorno = 0 (Sucesso)
    syscall                 # Chama o Kernel do Linux

# Syscall = chamada do sistema.