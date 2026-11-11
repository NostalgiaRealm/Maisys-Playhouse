
/* ==== __break @ 0045f27f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f27f-0045f27f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


