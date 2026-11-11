
/* ==== __break @ 14022934 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022934-14022934
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


