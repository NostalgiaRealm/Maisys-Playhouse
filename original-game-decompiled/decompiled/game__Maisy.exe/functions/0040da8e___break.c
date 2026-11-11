
/* ==== __break @ 0040da8e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040da8e-0040da8e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


