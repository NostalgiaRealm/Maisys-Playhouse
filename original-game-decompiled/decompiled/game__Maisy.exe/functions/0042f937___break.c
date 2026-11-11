
/* ==== __break @ 0042f937 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042f937-0042f937
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


