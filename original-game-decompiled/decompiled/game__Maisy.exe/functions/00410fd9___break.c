
/* ==== __break @ 00410fd9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410fd9-00410fd9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


