
/* ==== __break @ 0045f9ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f9ce-0045f9ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


