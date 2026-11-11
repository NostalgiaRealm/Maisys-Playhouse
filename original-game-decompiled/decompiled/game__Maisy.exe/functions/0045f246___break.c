
/* ==== __break @ 0045f246 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f246-0045f246
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


