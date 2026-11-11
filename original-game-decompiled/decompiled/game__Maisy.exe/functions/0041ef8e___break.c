
/* ==== __break @ 0041ef8e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ef8e-0041ef8e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


