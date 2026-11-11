
/* ==== __break @ 0049dfbf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049dfbf-0049dfbf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


