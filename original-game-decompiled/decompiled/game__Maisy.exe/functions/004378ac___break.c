
/* ==== __break @ 004378ac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004378ac-004378ac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


