
/* ==== __break @ 00489934 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489934-00489934
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


