
/* ==== __break @ 0040fb63 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fb63-0040fb63
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


