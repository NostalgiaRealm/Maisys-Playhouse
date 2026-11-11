
/* ==== __break @ 0045f1ac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f1ac-0045f1ac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


