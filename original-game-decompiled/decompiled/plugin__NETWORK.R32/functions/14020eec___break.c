
/* ==== __break @ 14020eec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020eec-14020eec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


