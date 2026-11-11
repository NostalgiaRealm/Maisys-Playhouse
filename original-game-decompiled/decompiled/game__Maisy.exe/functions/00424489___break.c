
/* ==== __break @ 00424489 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00424489-00424489
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


