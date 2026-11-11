
/* ==== __break @ 00489931 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489931-00489931
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


