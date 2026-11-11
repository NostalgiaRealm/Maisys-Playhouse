
/* ==== __break @ 00444c9a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00444c9a-00444c9a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


