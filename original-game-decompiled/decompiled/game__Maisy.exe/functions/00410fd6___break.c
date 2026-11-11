
/* ==== __break @ 00410fd6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410fd6-00410fd6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


