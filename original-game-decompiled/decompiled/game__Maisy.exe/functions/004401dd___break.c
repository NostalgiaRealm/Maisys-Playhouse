
/* ==== __break @ 004401dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004401dd-004401dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


