
/* ==== __break @ 0045f2fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f2fc-0045f2fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


