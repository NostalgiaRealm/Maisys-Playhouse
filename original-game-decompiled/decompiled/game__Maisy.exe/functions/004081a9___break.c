
/* ==== __break @ 004081a9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004081a9-004081a9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


