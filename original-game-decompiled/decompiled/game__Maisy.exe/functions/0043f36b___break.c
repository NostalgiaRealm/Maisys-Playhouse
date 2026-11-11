
/* ==== __break @ 0043f36b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043f36b-0043f36b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


