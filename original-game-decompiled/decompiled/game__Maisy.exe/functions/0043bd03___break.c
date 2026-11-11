
/* ==== __break @ 0043bd03 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd03-0043bd03
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


