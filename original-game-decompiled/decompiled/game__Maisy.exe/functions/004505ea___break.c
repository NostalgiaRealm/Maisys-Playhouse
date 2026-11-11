
/* ==== __break @ 004505ea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004505ea-004505ea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


