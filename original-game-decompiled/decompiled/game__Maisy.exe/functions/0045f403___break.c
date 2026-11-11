
/* ==== __break @ 0045f403 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f403-0045f403
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


