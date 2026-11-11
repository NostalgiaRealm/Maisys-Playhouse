
/* ==== __break @ 0041ecba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ecba-0041ecba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


