
/* ==== __break @ 00492607 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00492607-00492607
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


