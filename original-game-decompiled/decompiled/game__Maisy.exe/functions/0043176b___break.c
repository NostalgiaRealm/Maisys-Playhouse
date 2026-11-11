
/* ==== __break @ 0043176b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043176b-0043176b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


