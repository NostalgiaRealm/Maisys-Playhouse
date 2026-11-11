
/* ==== __break @ 004304cb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004304cb-004304cb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


