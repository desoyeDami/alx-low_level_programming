  global main
  extern printf

  section .text    
  main:
      push rbp    
      mov rbp, rsp

      ; Call printf    
      mov rdi, msg    
      call printf  

      pop rbp    
      ret

  section .data
  msg: db 'Hello, Holberton', 10, 0
