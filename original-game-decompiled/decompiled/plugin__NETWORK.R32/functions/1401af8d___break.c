
/* ==== __break @ 1401af8d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af8d-1401af8d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


