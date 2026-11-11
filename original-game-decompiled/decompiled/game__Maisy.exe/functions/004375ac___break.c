
/* ==== __break @ 004375ac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004375ac-004375ac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


