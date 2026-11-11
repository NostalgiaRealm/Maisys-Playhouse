
/* ==== __break @ 0048a25f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048a25f-0048a25f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


