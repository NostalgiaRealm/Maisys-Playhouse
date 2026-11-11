
/* ==== __break @ 0045022d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045022d-0045022d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


