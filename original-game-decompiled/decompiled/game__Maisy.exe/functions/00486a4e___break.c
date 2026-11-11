
/* ==== __break @ 00486a4e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486a4e-00486a4e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


