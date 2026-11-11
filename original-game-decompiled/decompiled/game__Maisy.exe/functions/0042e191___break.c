
/* ==== __break @ 0042e191 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042e191-0042e191
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


