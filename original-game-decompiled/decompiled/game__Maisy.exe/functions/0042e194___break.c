
/* ==== __break @ 0042e194 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042e194-0042e194
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


