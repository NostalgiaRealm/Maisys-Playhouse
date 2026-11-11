
/* ==== __break @ 0041fd1d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041fd1d-0041fd1d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


