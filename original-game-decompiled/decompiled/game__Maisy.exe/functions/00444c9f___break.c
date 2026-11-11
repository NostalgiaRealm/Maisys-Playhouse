
/* ==== __break @ 00444c9f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00444c9f-00444c9f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


