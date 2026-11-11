
/* ==== __break @ 0044bcaa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044bcaa-0044bcaa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


