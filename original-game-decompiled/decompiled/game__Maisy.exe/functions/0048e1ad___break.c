
/* ==== __break @ 0048e1ad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048e1ad-0048e1ad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


