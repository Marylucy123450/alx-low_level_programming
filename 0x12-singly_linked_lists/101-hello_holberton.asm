        global  main           ; Declare the entry point of the program

        extern  printf         ; Declare the printf function from the C library

main:
        mov     edi, format    ; Move address of format string into edi register
        xor     eax, eax       ; Clear the eax register (function return value)
        call    printf         ; Call the printf function
        mov     eax, 0         ; Set the return value of the main function to 0
        ret                    ; Return from the main function

format:
        db      'Hello, Holberton', 0x0A, 0   ; Define format string with newline characte
