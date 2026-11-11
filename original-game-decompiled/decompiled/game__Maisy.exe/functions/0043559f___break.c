
/* ==== __break @ 0043559f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043559f-0043559f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


