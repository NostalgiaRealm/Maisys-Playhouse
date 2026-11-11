
/* ==== __break @ 004950ea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004950ea-004950ea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


