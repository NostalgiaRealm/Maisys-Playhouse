
/* ==== __break @ 004383dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004383dd-004383dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


