
/* ==== __break @ 0045f62c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f62c-0045f62c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


