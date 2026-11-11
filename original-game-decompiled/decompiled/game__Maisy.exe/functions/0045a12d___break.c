
/* ==== __break @ 0045a12d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a12d-0045a12d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


