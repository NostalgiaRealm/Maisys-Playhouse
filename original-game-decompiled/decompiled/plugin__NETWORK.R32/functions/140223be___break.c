
/* ==== __break @ 140223be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223be-140223be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


