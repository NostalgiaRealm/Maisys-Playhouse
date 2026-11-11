
/* ==== __break @ 004081ac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004081ac-004081ac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


