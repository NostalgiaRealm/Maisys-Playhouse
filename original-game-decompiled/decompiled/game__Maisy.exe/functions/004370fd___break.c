
/* ==== __break @ 004370fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004370fd-004370fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


