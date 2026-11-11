
/* ==== __break @ 0045a18d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a18d-0045a18d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


