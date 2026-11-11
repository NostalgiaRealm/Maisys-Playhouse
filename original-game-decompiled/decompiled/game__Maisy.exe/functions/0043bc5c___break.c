
/* ==== __break @ 0043bc5c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bc5c-0043bc5c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


